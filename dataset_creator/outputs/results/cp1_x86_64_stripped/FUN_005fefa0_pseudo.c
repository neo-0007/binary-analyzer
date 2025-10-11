
void FUN_005fefa0(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = 0x19000;
    }
    *(long *)(param_1 + 0x98) = param_2;
    return;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/http/http_client.c",0x9f,"OSSL_HTTP_REQ_CTX_set_max_response_length");
  FUN_0051f8f0(0x3d,0xc0102,0);
  return;
}

