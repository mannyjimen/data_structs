#include <iostream>
#include <vector>
#include <string>

#ifndef TOPO_
#define TOPO_
//Topological Sort
//A --> B --> C , C --> D, A -->D

class topoNode
{
    public:
        topoNode();
        topoNode(const std::string& name);
        topoNode(const std::string& name, bool complete);
        topoNode(const std::string& name, bool complete, std::vector<topoNode*> requirements, std::vector<topoNode*> requiredfor);

        void setComplete();        
        bool isComplete();
        bool meetsRequirements();

        topoNode getNode();

        
        std::string getName(); //return name variable
        
        void printReqFor(); //prints what is needed for 
        void printReq(); //prints requirements (complete&incomplete)

    private:
        std::string m_name;
        bool m_complete;
        std::vector<topoNode*> m_requirements;
        std::vector<topoNode*> m_requiredfor;
};

#endif