verifyParams(requiredParams = [], comparedObject = {}) {
        let response = {};
        response.success = true;
        response.message = "No issues found";
        response.statusCode = 200;
        response.data = []
        let paramsNotFound = this.findMissingFields(comparedObject, requiredParams);
        if (paramsNotFound.length > 0) {
            response.success = false;
            response.message = "Some objects missing";
            response.statusCode = 422;
            response.data = paramsNotFound
        }
        return response;
    }
