// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "MaterialNormalTextureInfoJsonHandler.h"
#include "MaterialOcclusionTextureInfoJsonHandler.h"
#include "MaterialPBRMetallicRoughnessJsonHandler.h"
#include "NamedObjectJsonHandler.h"
#include "TextureInfoJsonHandler.h"

#include <CesiumGltf/Material.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/BoolJsonHandler.h>
#include <CesiumJsonReader/DoubleJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
}

namespace CesiumGltfReader {
class MaterialJsonHandler : public CesiumGltfReader::NamedObjectJsonHandler {
public:
  using ValueType = CesiumGltf::Material;

  MaterialJsonHandler(
      const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void reset(IJsonHandler* pParentHandler, CesiumGltf::Material* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyMaterial(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::Material& o);

private:
  CesiumGltf::Material* _pObject = nullptr;
  MaterialPBRMetallicRoughnessJsonHandler _pbrMetallicRoughness;
  MaterialNormalTextureInfoJsonHandler _normalTexture;
  MaterialOcclusionTextureInfoJsonHandler _occlusionTexture;
  TextureInfoJsonHandler _emissiveTexture;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _emissiveFactor;
  CesiumJsonReader::StringJsonHandler _alphaMode;
  CesiumJsonReader::DoubleJsonHandler _alphaCutoff;
  CesiumJsonReader::BoolJsonHandler _doubleSided;
};
} // namespace CesiumGltfReader
