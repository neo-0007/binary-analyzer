
undefined4 * FUN_005fed10(long param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar1 = (undefined4 *)FUN_0041aec0(0xc0,"../crypto/http/http_client.c",99);
    puVar3 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x1000;
      lVar2 = (long)param_3;
      if (param_3 < 1) {
        lVar2 = 0x1000;
        param_3 = 0x1000;
      }
      puVar1[4] = param_3;
      lVar2 = FUN_0041ad90(lVar2,"../crypto/http/http_client.c",0x67);
      *(long *)(puVar1 + 6) = param_1;
      *(long *)(puVar1 + 2) = lVar2;
      *(long *)(puVar1 + 8) = param_2;
      if (lVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
        FUN_0041ad60(puVar1,"../crypto/http/http_client.c",0x6b);
      }
      else {
        *(undefined8 *)(puVar1 + 0x26) = 0x19000;
      }
    }
    return puVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/http/http_client.c",0x5f,"OSSL_HTTP_REQ_CTX_new");
  FUN_0051f8f0(0x3d,0xc0102,0);
  return (undefined4 *)0x0;
}

