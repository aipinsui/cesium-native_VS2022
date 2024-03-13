// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "MeshPrimitiveJsonHandler.h"
#include "NamedObjectJsonHandler.h"

#include <CesiumGltf/Mesh.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/DoubleJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
}

namespace CesiumGltfReader {
class MeshJsonHandler : public CesiumGltfReader::NamedObjectJsonHandler {
public:
  using ValueType = CesiumGltf::Mesh;

  MeshJsonHandler(const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void reset(IJsonHandler* pParentHandler, CesiumGltf::Mesh* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyMesh(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::Mesh& o);

private:
  CesiumGltf::Mesh* _pObject = nullptr;
  CesiumJsonReader::
      ArrayJsonHandler<CesiumGltf::MeshPrimitive, MeshPrimitiveJsonHandler>
          _primitives;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _weights;
};
} // namespace CesiumGltfReader
