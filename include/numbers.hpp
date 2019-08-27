#pragma once
#include <vector>
class numbers 
{
    friend class lcd;
    private:
        std::vector<std::vector<char>> one {{' ',' ',' '},
                                            {' ',' ','|'},
                                            {' ',' ','|'}};

        std::vector<std::vector<char>> two {{' ','_',' '},
                                            {' ','_','|'},
                                            {'|','_',' '}};

        std::vector<std::vector<char>> three {{' ','_',' '},
                                              {' ','_','|'},
                                              {' ','_','|'}};

        std::vector<std::vector<char>> four {{' ',' ',' '},
                                             {'|','_','|'},
                                             {' ',' ','|'}};
                                             
        std::vector<std::vector<char>> five {{' ','_',' '},
                                             {'|','_',' '},
                                             {' ','_','|'}};

        std::vector<std::vector<char>> six {{' ','_',' '},
                                            {'|','_',' '},
                                            {'|','_','|'}};

        std::vector<std::vector<char>> seven {{' ','_',' '},
                                              {' ',' ','|'},
                                              {' ',' ','|'}};

        std::vector<std::vector<char>> eight {{' ','_',' '},
                                              {'|','_','|'},
                                              {'|','_','|'}};

        std::vector<std::vector<char>> nine {{' ','_',' '},
                                             {'|','_','|'},
                                             {' ','_','|'}};

        std::vector<std::vector<char>> zero {{' ','_',' '},
                                             {'|',' ','|'},
                                             {'|','_','|'}};
};