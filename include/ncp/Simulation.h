#ifndef SIM_H
#define SIM_H

#include <memory>
#include <string>

#include <glad/glad.h>
#include <glfw/include/GLFW/glfw3.h>

#include "Camera.h"
#include "Entity.h"
#include "EntityManager.h"
#include "Shader.h"
#include "ncp/Vec3.h"

struct PlanetConfig {
  ncp::Vec3 pos, vel;
  double mass;
};

namespace ncp {
class Sim {
 public:
  Sim(const std::string& windowName, const std::string& config);

  void run();

 private:
  GLFWwindow* m_window;
  EntityManager m_entities;
  bool m_paused = false;
  bool m_running = true;
  size_t m_currentFrame = 0;
  Camera m_camera;
  Shader m_skyboxShader;
  Shader m_modelShader;
  Shader m_glowingShader;

  void init(const std::string& windowName, const std::string& config);
  void setPaused(bool paused);
  void computeGravityForces(const EntityVec& objects);

  void sMovement();
  void sUserInput();
  void sRender();

  // void sSpawnPlanets();
};
}  // namespace ncp

#endif
