#pragma once

#include <cstddef>

#include "dis6/common/Pdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.5. Abstract superclass for logistics PDUs. COMPLETE

class LogisticsFamilyPdu : public Pdu {
 public:
  LogisticsFamilyPdu();
  ~LogisticsFamilyPdu() override;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const LogisticsFamilyPdu& rhs) const;
};
}  // namespace dis
