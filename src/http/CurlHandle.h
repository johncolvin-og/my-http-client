#pragma once

namespace bts::http {

class CurlHandle {
 public:
   static CurlHandle &instance();

   CurlHandle(CurlHandle const &) = delete;
   CurlHandle(CurlHandle &&) = delete;

   CurlHandle &operator=(CurlHandle const &) = delete;
   CurlHandle &operator=(CurlHandle &&) = delete;

   ~CurlHandle();

 private:
   CurlHandle();
};

} // namespace bts::http
