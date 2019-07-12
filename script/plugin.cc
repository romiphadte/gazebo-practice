#include <gazebo/gazebo.hh>

namespace gazebo
{
  class ProjOneWorldPlugin : public WorldPlugin
  {
    public:
        ProjOneWorldPlugin(): WorldPlugin()
        {
          std::cout << "Welcome to Romi's world" << std::endl;
        }

        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {
          // TO IMPLEMENT
        }
  };
  GZ_REGISTER_WORLD_PLUGIN(ProjOneWorldPlugin)
}

