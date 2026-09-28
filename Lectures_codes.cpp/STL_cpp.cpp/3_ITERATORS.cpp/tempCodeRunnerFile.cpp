list<int>:: iterator it = myList.begin();

    while(it != myList.end()){
        //writing
        (*it) = (*it) + 2;

        //read
        cout<<(*it) << " ";
        //forward move
        it++;
    }
