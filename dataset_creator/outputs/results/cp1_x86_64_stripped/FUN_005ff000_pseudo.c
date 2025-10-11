
undefined8 FUN_005ff000(undefined4 *param_1,int param_2,long param_3,long param_4,char *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0xae,"OSSL_HTTP_REQ_CTX_set_request_line");
    FUN_0051f8f0(0x3d,0xc0102,0);
    return 0;
  }
  FUN_004ab560(*(undefined8 *)(param_1 + 0x16));
  uVar2 = FUN_005c0c00();
  lVar3 = FUN_004ab550(uVar2);
  *(long *)(param_1 + 0x16) = lVar3;
  if (lVar3 != 0) {
    puVar4 = &DAT_0081a5b3;
    param_1[0x1a] = (uint)(param_2 != 0);
    if (param_2 == 0) {
      puVar4 = &DAT_0081a5b8;
    }
    iVar1 = FUN_004ae9e0(lVar3,&DAT_0080836d,puVar4);
    if (0 < iVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x16);
      if (param_3 != 0) {
        iVar1 = FUN_004ae9e0(uVar2,"http://%s",param_3);
        if (iVar1 < 1) {
          return 0;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x16);
        if (param_4 != 0) {
          iVar1 = FUN_004ae9e0(uVar2,":%s",param_4);
          if (iVar1 < 1) {
            return 0;
          }
          uVar2 = *(undefined8 *)(param_1 + 0x16);
        }
      }
      if (param_5 == (char *)0x0) {
        param_5 = "/";
      }
      else if (*param_5 != '/') {
        iVar1 = FUN_004ae9e0(uVar2,&DAT_00823afc);
        if (iVar1 < 1) {
          return 0;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x16);
      }
      iVar1 = FUN_004ae9e0(uVar2,"%s HTTP/1.0\r\n",param_5);
      if (0 < iVar1) {
        *(undefined8 *)(param_1 + 0x24) = 0;
        *param_1 = 0x1001;
        return 1;
      }
    }
  }
  return 0;
}

