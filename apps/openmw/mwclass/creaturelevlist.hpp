#ifndef GAME_MWCLASS_CREATURELEVLIST_H
#define GAME_MWCLASS_CREATURELEVLIST_H

#include "../mwworld/class.hpp"

namespace MWClass
{
    class CreatureLevList : public MWWorld::Class
    {
        void ensureCustomData (const MWWorld::Ptr& ptr) const;

        public:

            virtual std::string getName (const MWWorld::ConstPtr& ptr) const;
            ///< \return name (the one that is to be presented to the user; not the internal one);
            /// can return an empty string.

            static void registerSelf();

            virtual void insertObjectRendering (const MWWorld::Ptr& ptr, const std::string& model, MWRender::RenderingInterface& renderingInterface) const;
            ///< Add reference into a cell for rendering

            virtual void readAdditionalState (const MWWorld::Ptr& ptr, const ESM::ObjectState& state) const;
            ///< Read additional state from \a state into \a ptr.

            virtual void writeAdditionalState (const MWWorld::ConstPtr& ptr, ESM::ObjectState& state) const;
            ///< Write additional state from \a ptr into \a state.

            virtual void respawn (const MWWorld::Ptr& ptr) const;
    };
}

#endif
