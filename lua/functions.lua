#!/usr/bin/env lua

--[[
   [function fib(n)
   [    if n < 2 then return 1 end
   [    return fib(n-2) + fib(n-1)
   [end
   [
   [print(fib(6))
   ]]

--[[
   [function newCounter()
   [    local i = 0
   [    return function()
   [        i = i + 1
   [        return i
   [    end
   [end
   [
   [c1 = newCounter()
   [print(c1())
   [print(c1())
   ]]

--[[
   [function myPower(x)
   [    return function(y) return y^x end
   [end
   [
   [power2 = myPower(2)
   [power3 = myPower(3)
   [
   [print(power2(4))
   [print(power3(5))
   ]]

-- name, age, bGay = 'haoel', 37, false, 'haoel@hotmail.com'

--[[
   [function getUserInfo(id)
   [    print(id)
   [    return "haoel", 37, "haoel@hotmail.com", "http://coolshell.cn"
   [end
   [
   [name, age, email, website, bGay = getUserInfo()
   ]]


--[[
   [function foo(x) return x^2 end
   [foo = function(x) return x^2 end
   ]]



-- table
--[[
   [haoel = {
   [    name     = "ChenHao",
   [    age      = 37,
   [    handsome = True
   [}
   [
   [haoel.website = "http://coolshell.cn/"
   [local age = haoel.age
   [haoel.handsome = false
   [haoel.name = nil
   [
   [t = {
   [    [200] = 100,
   [    ['name'] = "ChenHao",
   [    [3.14] = "PI"
   [}
   ]]

--[[
   [arr = {10, 20, 30, 40, 50}
   [print(arr[1])
   ]]
-- ====
-- arr = {[1]=10, [2]=20, [3]=30, [4]=40, [5]=50}
--[[
   [arr = {
   [    "string",
   [    100,
   [    "haoel",
   [    function() print("coolshell.cn") end
   [}
   ]]

-- call the function via arr[4]()


--[[
   [for i = 1, #arr do
   [    print(arr[i])
   [end
   ]]

-- variables are global by default unless it is declared with local

-- to refer to a global variable, use _G
-- _G.globalVar
-- _G["globalVar"]


--[[
   [for k, v in pairs(t) do
   [    print(k, v)
   [end
   ]]

-- MetaTable MetaMethod
fraction_a = {numerator=2, denominator=3}
fraction_b = {numerator=4, denominator=7}

fraction_op={}
function fraction_op.__add(f1, f2)
    ret = {}
    ret.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator
    ret.denominator = f1.denominator * f2.denominator
    return ret
end

setmetatable(fraction_a, fraction_op)
setmetatable(fraction_b, fraction_op)

fraction_s = fraction_a + fraction_b
print(fraction_s)
