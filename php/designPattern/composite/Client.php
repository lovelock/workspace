<?php
class Client
{
    public static function displayMenu()
    {
        $subMenu1 = new MenuComposite("submenu1");
        $subMenu2 = new MenuComposite("submenu2");
        $subMenu3 = new MenuComposite("submenu3");

        $subMenu4 = new MenuComposite("submenu4");
        $subMenu5 = new MenuComposite("submenu5");

        $item3 = new ItemLeaf('baidu', 'www.baidu.com');
        $item4 = new ItemLeaf('google', 'www.google.com');

        $allMenu = new MenuComposite("AllMenu");
        $allMenu->add($subMenu1);
        $allMenu->add($subMenu2);
        $allMenu->add($subMenu3);
        $subMenu3->add($subMenu4);
        $subMenu4->add($subMenu5);
        $allMenu->displayOperation();
    }
}

Client::displayMenu();
