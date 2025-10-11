
undefined4 FUN_005ff2a0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || ((param_3 == 0 && (param_2 != 0)))) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/http/http_client.c",0x110,"set1_content");
    FUN_0051f8f0(0x3d,0xc0102,0);
  }
  else {
    if ((*(int *)(param_1 + 0xa0) != 0) &&
       (iVar1 = FUN_005ff180(param_1,"Connection","keep-alive"), iVar1 == 0)) {
      return 0;
    }
    FUN_004ab560(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/http/http_client.c",0x11d,"set1_content");
      FUN_0051f8f0(0x3d,0xc0101,0);
      return 0;
    }
    if ((param_2 != 0) &&
       (iVar1 = FUN_004ae9e0(*(undefined8 *)(param_1 + 0x58),"Content-Type: %s\r\n",param_2),
       iVar1 < 1)) {
      return 0;
    }
    lVar2 = FUN_004abd40(param_3,3,0,0);
    if ((0 < lVar2) &&
       (iVar1 = FUN_004ae9e0(*(undefined8 *)(param_1 + 0x58),"Content-Length: %ld\r\n",lVar2),
       iVar1 < 1)) {
      return 0;
    }
    iVar1 = FUN_004ab6a0(param_3);
    if (iVar1 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x60) = param_3;
    uVar3 = 1;
  }
  return uVar3;
}

