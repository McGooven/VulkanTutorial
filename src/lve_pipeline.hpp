#pragma once

#include "lve_device.hpp"

#include <string>
#include <vector>

namespace lve {
    // struct PipelineConfigInfo {};

    class LvePipeline {
        public:
            LvePipeline(
                // const LveDevice& device,
                const std::string& vertFilepath,
                const std::string& fragFilepath
                // const PipelineConfigInfo& configInfo
            );

        private:
            static std::vector<char> readFile(const std::string& filepath);
            void createGraphicsPipeline(
                const std::string& vertFilepath,
                const std::string& fragFilepath
                // const PipelineConfigInfo& configInfo
            );
            // LveDevice& lveDevice;
    };
}