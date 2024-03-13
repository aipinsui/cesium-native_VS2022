// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "ExtensionModelMaxarMeshVariantsValueJsonHandler.h"

#include <CesiumGltf/ExtensionModelMaxarMeshVariants.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
}

namespace CesiumGltfReader {
class ExtensionModelMaxarMeshVariantsJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler,
      public CesiumJsonReader::IExtensionJsonHandler {
public:
  using ValueType = CesiumGltf::ExtensionModelMaxarMeshVariants;

  static inline constexpr const char* ExtensionName = "MAXAR_mesh_variants";

  ExtensionModelMaxarMeshVariantsJsonHandler(
      const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      CesiumGltf::ExtensionModelMaxarMeshVariants* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  virtual void reset(
      IJsonHandler* pParentHandler,
      CesiumUtility::ExtensibleObject& o,
      const std::string_view& extensionName) override;

  virtual IJsonHandler& getHandler() override { return *this; }

protected:
  IJsonHandler* readObjectKeyExtensionModelMaxarMeshVariants(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::ExtensionModelMaxarMeshVariants& o);

private:
  CesiumGltf::ExtensionModelMaxarMeshVariants* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _defaultProperty;
  CesiumJsonReader::ArrayJsonHandler<
      CesiumGltf::ExtensionModelMaxarMeshVariantsValue,
      ExtensionModelMaxarMeshVariantsValueJsonHandler>
      _variants;
};
} // namespace CesiumGltfReader