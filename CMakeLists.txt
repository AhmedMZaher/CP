cmake_minimum_required(VERSION 3.21)
project(Sheet_Answers)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(cmake-build-debug)
include_directories(cmake-build-debug/.cmake)
include_directories(cmake-build-debug/.cmake/api)
include_directories(cmake-build-debug/.cmake/api/v1)
include_directories(cmake-build-debug/.cmake/api/v1/query)

add_executable(Sheet_Answers
        .idea/.name
        .idea/modules.xml
        .idea/Sheet-Answers.iml
        .idea/vcs.xml
        .idea/workspace.xml
        .gitattributes
        "A. Alyona and Numbers.cpp"
        "A. Anton and Danik.cpp"
        "A. Anton and Letters.cpp"
        "A. Anton and Polyhedrons.cpp"
        "A. Balanced Rating Changes.cpp"
        "A. Bear and Big Brother.cpp"
        "A. Beautiful Matrix.cpp"
        "A. Black Square.cpp"
        "A. BowWow and the Timetable.cpp"
        "A. Boy or Girl.cpp"
        "A. Brain's Photos.cpp"
        "A. Buy a Shovel.cpp"
        "A. Calculating Function.cpp"
        "A. Carrot Cakes.cpp"
        "A. Chewba?ca and Number.cpp"
        "A. Colorful Stones (Simplified Edition).c"
        "A. Colorful Stones (Simplified Edition).cpp"
        "A. Counterexample V1.cpp"
        "A. Counterexample V2.cpp"
        "A. Dice Tower.cpp"
        "A. Die Roll.cpp"
        "A. Dubstep.cpp"
        "A. Football.cpp"
        "A. Free Ice Cream.cpp"
        "A. Games.cpp"
        "A. Gravity Flip.cpp"
        "A. Helpful Maths.cpp"
        "A. IQ Test.cpp"
        "A. Is it rated.txt"
        "A. Juicer.cpp"
        "A. Keyboard.cpp"
        "A. Ksenia and Pan Scales.cpp"
        "A. Launch of Collider.cpp"
        "A. Lineland Mail.cpp"
        "A. Magnets.cpp"
        "A. Mahmoud and Longest Uncommon Subsequence.cpp"
        "A. New Password.cpp"
        "A. Night at the Museum.cpp"
        "A. Oath of the Night's Watch.cpp"
        "A. Olesya and Rodion.cpp"
        "A. Pangram.cpp"
        "A. Panoramix's Prediction.cpp"
        "A. Petya and Strings.cpp"
        "A. Police Recruits.cpp"
        "A. Polo the Penguin and Segments.cpp"
        "A. Presents.cpp"
        "A. Raising Bacteria.cpp"
        "A. Sereja and Dima.cpp"
        "A. Shaass and Oskols.cpp"
        "A. Snow Footprints.cpp"
        "A. Stable Arrangement of Rooks"
        "A. Stones on the Table.cpp"
        "A. Team.cpp"
        "A. Theatre Square.cpp"
        "A. Twins.cpp"
        "A. Valera and X.cpp"
        "A. Vanya and Fence.cpp"
        "A. Wasted Time"
        "A. Way Too Long Words.cpp"
        "A. Word.cpp"
        "B. Burglar and Matches.cpp"
        "B. Caisa and Pylons.cpp"
        "B. Coins.cpp"
        "B. Easter Eggs.cpp"
        "B. Forming Teams"
        "B. Ilya and Queries .cpp"
        "B. Petya and Countryside"
        "B. Sum of Digits.cpp"
        Hierarchy.cpp
        README.md
        "UVA 10106.cpp"
        "UVA 10110.cpp"
        "UVA 10452.cpp"
        "UVA 11231.cpp"
        "UVA 11953.cpp"
        "UVA 352.cpp")
