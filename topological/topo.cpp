#include "topo.hpp"

topoNode::topoNode(): m_name{"Empty"}, m_complete{false} {}

topoNode::topoNode(const std::string& name): m_name{name}, m_complete{false} {}

topoNode::topoNode(const std::string& name, bool complete): m_name{name}, m_complete{complete} {}

topoNode::topoNode(const std::string& name, bool complete, std::vector<topoNode*> requirements, std::vector<topoNode*> requiredfor):
    m_name{name}, m_complete{complete}, m_requirements{requirements}, m_requiredfor{requiredfor} {}
    

topoNode topoNode::getNode(){
    return *this;
}

void topoNode::setComplete() {m_complete = true;}    

bool topoNode::isComplete()
{
    if (isComplete) {return true;}
    else {return false;}
}

bool topoNode::meetsRequirements()
{
    for (auto it = m_requirements.begin(); it != m_requirements.end(); it++)
    {
        if (it.getNode()->isComplete())
            return false;
    }
    return true;
}