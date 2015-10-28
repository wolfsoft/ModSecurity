/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include <vector>
#include <string>
#include <list>
#include <utility>

#ifndef SRC_VARIABLES_ENV_H_
#define SRC_VARIABLES_ENV_H_

#include "variables/variable.h"

namespace ModSecurity {

class Assay;
namespace Variables {

class Env : public Variable {
 public:
    explicit Env(std::string _name)
        : Variable(_name) { }

    std::list<transaction::Variable *> *
        evaluate(Assay *assay) override;
};


}  // namespace Variables
}  // namespace ModSecurity

#endif  // SRC_VARIABLES_ENV_H_