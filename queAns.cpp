#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>

data::data(){
        text1.setFont(font);
        text1.setColor(Color::Black);
        text1.setPosition(150,130);
        text1.setString("Choose The Field: \n"
                        <<"1 for Medical: \n"
                        <<"2 for Sports: \n"
                        <<"3 for General Knowledge: \n"
                        <<"4 for Engineering: \n");

        text2.setFont(font);
        text2.setCharacterSize(30);
        text2.setColor(Color::Black);
        text2.setPosition(125,410);

        text3.setFont(font);
        text3.setColor(Color::Black);
        text3.setPosition(150,130);

        textC.setFont(font);
        textC.setColor(Color::Red);
        textC.setPosition(150,130);
        textC.setString("Congratulation!!Correct answer.");

        textW.setFont(font);
        textW.setColor(Color::Red);
        textW.setPosition(150,130);
        textW.setString("Sorry !! Incorrect answer.");
}


/*data::Qlogic(int answer){
switch(answer)
{
    case 1:
        medanstally();
        break;
    case 2:
        sportsanstally();
        break;
    case 3:
        gkanstally();
        break;
    default:
        engganstally();
    }
}*/

/*data::medanstally(){
    std::ifstream file ("database/medical.txt");
    std::ifstream file2 ("database/medicalans.txt");
    std::string line[25],line1[25];
    string p;
    int i;
    for(i=0;i<25;i++)
    {
        getline(file,line[i]);
        text2.setString(line[i]);
        getline(file,line[i]);
        text3.setString(line[i])
        cin>>p;

        getline(file2,line1[i]);
        if(line1[i]==p)
            {cans();
            cscore();}
        else
            {wans();
            wscore();}
    }
}


data::sportsanstally(){
std::ifstream file ("database/sports.txt");
std::ifstream file2 ("database/sportsans.txt");
std::string line[25],line1[25];
string p;
int i;
for(i=0;i<25;i++)
{
    getline(file,line[i]);
    text2.setString(line[i]);
    getline(file,line[i]);
    text3.setString(line[i])
    cin>>p;

    getline(file2,line1[i]);
    if(line1[i]==p)
    {cans();
    cscore();}
    else
    {wans();
    wscore();}
}
}

data::gkanstally(){
std::ifstream file ("database/gk.txt");
std::ifstream file2 ("database/gkans.txt");
std::string line[25],line1[25];
string p;
int i;
for(i=0;i<25;i++)
{
    getline(file,line[i]);
    text2.setString(line[i]);
    getline(file,line[i]);
    text3.setString(line[i])
    cin>>p;

    getline(file2,line1[i]);
    if(line1[i]==p)
    {cans();
    cscore();}
    else
    {wans();
    wscore();}
}
}


data::engganstally(){
std::ifstream file ("database/engineering.txt");
std::ifstream file2 ("database/enggans.txt");
std::string line[25],line1[25];
string p;
int i;
for(i=0;i<25;i++)
{
    getline(file,line[i]);
    text2.setString(line[i]);
    getline(file,line[i]);
    text3.setString(line[i])
    cin>>p;

    getline(file2,line1[i]);
    if(line1[i]==p)
    {cans();
    cscore();}
    else
    {wans();
    wscore();}
}
}*/
/*
show(){
    RenderWindow quize (VideoMode (300,300),"!! Quize !!");
     while(quize.isOpen())
    {
        Event newevent;
        while (quize.pollEvent(newevent))
        {
            if(newevent.type == Event::Closed)
                quize.close();
        }
    //data X;
    quize.clear(Color(200,222,200,0));
    quize.draw(text1);
    cin << answer;
    quize.clear(Color(200,222,200,0));
    switch(answer)
    {
    case 1:
        {
        std::ifstream file ("database/medical.txt");
        std::ifstream file2 ("database/medicalans.txt");
        std::string line[25],line1[25];
        string p;
        int i;
        for(i=0;i<25;i++)
        {
            getline(file,line[i]);
            text2.setString(line[i]);
            getline(file,line[i]);
            text3.setString(line[i])
            cin>>p;

            getline(file2,line1[i]);
            if(line1[i]==p)
                {quize.draw(cans());
            cscore();}
        else
            {quize.draw(wans());
            wscore();}
        }
        }
        break;
    case 2:{
        std::ifstream file ("database/sports.txt");
        std::ifstream file2 ("database/sportsans.txt");
        std::string line[25],line1[25];
        string p;
        int i;
        for(i=0;i<25;i++)
        {
        getline(file,line[i]);
        text2.setString(line[i]);
        getline(file,line[i]);
        text3.setString(line[i])
        cin>>p;

        getline(file2,line1[i]);
        if(line1[i]==p)
            {quize.draw(cans());
            cscore();}
        else
            {quize.draw(wans());
            wscore();}
        }
    }
        break;
    case 3:
        {
            std::ifstream file ("database/gk.txt");
            std::ifstream file2 ("database/gkans.txt");
            std::string line[25],line1[25];
            string p;
            int i;
        for(i=0;i<25;i++)
        {
            getline(file,line[i]);
            text2.setString(line[i]);
            getline(file,line[i]);
            text3.setString(line[i])
            cin>>p;

            getline(file2,line1[i]);
        if(line1[i]==p)
           {quize.draw(cans());
            cscore();}
        else
            {quize.draw(wans());
            wscore();}
        }
        }
        break;
    default:
        {
            std::ifstream file ("database/engineering.txt");
            std::ifstream file2 ("database/enggans.txt");
            std::string line[25],line1[25];
            string p;
            int i;
        for(i=0;i<25;i++)
        {
            getline(file,line[i]);
            text2.setString(line[i]);
            getline(file,line[i]);
            text3.setString(line[i])
            cin>>p;

            getline(file2,line1[i]);
        if(line1[i]==p)
            {quize.draw(cans());
            cscore();}
        else
            {quize.draw(wans());
            wscore();}
        }
        }
    }
    quize.close();
    }
}
*/
