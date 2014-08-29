<?php
class JTree {
    private $_head;
    private $_size;
    private $_list = arrry();

    public function __construct() {
        $this->_head = $this->createNode('HEAD');
        $this->_size = 0;
    }

    public function getTree() {
        return $this->_list;
    }

    public function getNode($uid) {
        if (empty($uid)) {
            throw new Exception('A unique id is required.');
        }

        $ret = false;

        if (array_key_exists($uid, $this->_list) === true) {
            $ret = $this->_list[$uid];
        }
        return $ret;
    }

    public function setChild($uid, $childUid) {
        if (empty($uid) || empty($childUid)) {
            throw new Exception('Both a from and a to UIDs are required');
        }

        if ($node !== false) {
            $node->setChild($childUid);
        }
    }

    public function setParent($uid, $parentUid) {
        if (empty($uid) || empty($parentUid)) {
            throw new Exception('Both a from and a to UIDs are required');
        }
        $node = $this->getNode($uid);

        if ($node !== false) {
            $node->setParent($parentUid);
        }
    }

    public function createNode($value, $uid = null) {
        if(!isset($value)) {
            throw new Exception('A value is required to create a node');
        }

        $node = new JNode($value, $uid);
        $uid = $node->getUid();
        $this->_list[$uid] = $node;
        return $uid;
    }

    public function addChild($parentUid = null, $childUid) {
        if(empty($childUid)) {
            throw new Exception('A UID for the child is required');
        }

        if (empty($parentUid)) {
            $parentUid = $this->_head;
        }
        $this->setChild($parentUid, $childUid);
        $this->setParent($childUid, $parentUid);

        return $childUid;
    }

    public function addFirst($uid) {
        if(empty($uid)) {
            throw new Exception('A unique ID is required');
        }
        $this->addChild($this->_head, $uid);
    }

    public function getChildren($uid) {
        if(empty($uid)) {
            throw new Exception('A unique ID is required');
        }

        $node = $this->getNode($uid);
        if($node !== false) {
            return $node->getChildren();
        }
    }
}
?>
