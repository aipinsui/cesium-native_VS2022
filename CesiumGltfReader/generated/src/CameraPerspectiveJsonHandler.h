// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/CameraPerspective.h>
#include <CesiumJsonReader/DoubleJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
}

namespace CesiumGltfReader {
class CameraPerspectiveJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = CesiumGltf::CameraPerspective;

  CameraPerspectiveJsonHandler(
      const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void
  reset(IJsonHandler* pParentHandler, CesiumGltf::CameraPerspective* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyCameraPerspective(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::CameraPerspective& o);

private:
  CesiumGltf::CameraPerspective* _pObject = nullptr;
  CesiumJsonReader::DoubleJsonHandler _aspectRatio;
  CesiumJsonReader::DoubleJsonHandler _yfov;
  CesiumJsonReader::DoubleJsonHandler _zfar;
  CesiumJsonReader::DoubleJsonHandler _znear;
};
} // namespace CesiumGltfReader