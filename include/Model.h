#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <vector>

#include "assimp/include/assimp/Importer.hpp"
#include "assimp/include/assimp/postprocess.h"
#include "assimp/include/assimp/scene.h"

#include "Mesh.h"
#include "Shader.h"

class Model {
 public:
  Model(const char* path);
  void draw(Shader& shader) const;

 private:
  std::vector<Texture> textures_loaded;
  std::vector<Mesh> meshes;
  std::string directory;

  void loadModel(const std::string& path);
  void processNode(aiNode* node, const aiScene* scene);
  Mesh processMesh(aiMesh* mesh, const aiScene* scene);
  std::vector<Texture> loadMaterialTextures(aiMaterial* material,
                                            aiTextureType type,
                                            const std::string& typeName);
};

#endif
