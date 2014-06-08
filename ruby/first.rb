#!/usr/bin/env ruby2

say = "I love Ruby"
puts say

say['love'] = "*love*"
puts say.upcase

5.times {
    puts say
}

citis = %w[London
        Oslo
        Paris
        Amsterdam
        Berlin
]

visited = %w[Berlin Oslo]

puts citis-visited
