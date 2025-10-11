
void OSSL_HTTP_REQ_CTX_set_max_response_length(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = 0x19000;
    }
    *(long *)(param_1 + 0x98) = param_2;
    return;
  }
  ERR_new();
  ERR_set_debug("../crypto/http/http_client.c",0x9f,"OSSL_HTTP_REQ_CTX_set_max_response_length");
  ERR_set_error(0x3d,0xc0102,0);
  return;
}

