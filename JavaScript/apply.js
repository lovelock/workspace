function Person(name, age){
    this.name = name;
    this.age = age;
    }

    function Student(name, age, grade){
        // Person.apply(this,arguments);
    Person.call(this, name, age, grade);
        this.grade = grade;
    }

    var student = new Student('qian', 21,'一年级');

    console.log('name: ' + student.name + "\n" + "age: " + student.age + "\n" + "grade: " + student.grade);