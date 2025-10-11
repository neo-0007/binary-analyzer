
bool FUN_005ff180(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0xd9,"OSSL_HTTP_REQ_CTX_add1_header");
    FUN_0051f8f0(0x3d,0xc0102,0);
    return false;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0xdd,"OSSL_HTTP_REQ_CTX_add1_header");
    FUN_0051f8f0(0x3d,0xc0101,0);
    return false;
  }
  iVar1 = FUN_004ab870();
  if (0 < iVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (param_3 == 0) {
LAB_005ff1f4:
      iVar1 = FUN_004ab7e0(uVar2,&DAT_00806cba,2);
      return iVar1 == 2;
    }
    iVar1 = FUN_004ab7e0(uVar2,": ",2);
    if (iVar1 == 2) {
      iVar1 = FUN_004ab870(*(undefined8 *)(param_1 + 0x58),param_3);
      if (0 < iVar1) {
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        goto LAB_005ff1f4;
      }
    }
  }
  return false;
}

