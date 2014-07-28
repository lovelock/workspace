#!/usr/bin/env lua

sex = "Male"

local age = io.read()
if age == 40 and sex == "Male" then
    print("男人四十一枝花")
elseif age > 60 and sex ~= "Female" then
    print("old man without country")
elseif age < 20 then
    io.write("too young, too simple\n")
else
    print("Your age is " .. age)
end
