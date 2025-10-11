
undefined4 FUN_005120f0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    FUN_0051f420();
    uVar5 = 0;
    FUN_0051f540("../crypto/ec/ecx_meth.c",0x25,"ecx_pub_encode");
    FUN_0051f8f0(0x10,0x74,0);
  }
  else {
    iVar1 = **(int **)(param_2 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar4 = ' ';
    }
    else {
      cVar4 = (iVar1 != 0x40b) + '8';
    }
    lVar2 = FUN_0041c320(*(long *)(param_2 + 0x20) + 0x11,cVar4,"../crypto/ec/ecx_meth.c",0x29);
    if (lVar2 == 0) {
      FUN_0051f420();
      uVar5 = 0;
      FUN_0051f540("../crypto/ec/ecx_meth.c",0x2b,"ecx_pub_encode");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      iVar1 = **(int **)(param_2 + 8);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar4 = ' ';
      }
      else {
        cVar4 = (iVar1 != 0x40b) + '8';
      }
      uVar3 = FUN_004239c0();
      iVar1 = FUN_005af9b0(param_1,uVar3,0xffffffff,0,lVar2,cVar4);
      if (iVar1 == 0) {
        FUN_0041ad60(lVar2,"../crypto/ec/ecx_meth.c",0x31);
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ecx_meth.c",0x32,"ecx_pub_encode");
        FUN_0051f8f0(0x10,0xc0100,0);
        return 0;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

