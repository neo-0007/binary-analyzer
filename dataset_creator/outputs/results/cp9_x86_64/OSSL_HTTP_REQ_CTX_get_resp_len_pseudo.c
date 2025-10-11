
undefined8 OSSL_HTTP_REQ_CTX_get_resp_len(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x90);
  }
  ERR_new();
  ERR_set_debug("../crypto/http/http_client.c",0x95,"OSSL_HTTP_REQ_CTX_get_resp_len");
  ERR_set_error(0x3d,0xc0102,0);
  return 0;
}

