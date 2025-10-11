
int FUN_005554c0(long *param_1,long param_2,long *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48c;
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48c = (int)*param_3;
  if (0x7fffffff < *param_3) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pem_lib.c",0x1ac,"PEM_do_header");
    FUN_0051f8f0(9,0x80,0);
    iVar1 = 0;
    goto LAB_0055561a;
  }
  if (*param_1 == 0) {
    iVar1 = 1;
    goto LAB_0055561a;
  }
  if (param_4 == (code *)0x0) {
    iVar1 = FUN_005551d0(local_448,0x400,0,param_5);
  }
  else {
    iVar1 = (*param_4)();
  }
  if (iVar1 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pem_lib.c",0x1b8,"PEM_do_header");
    FUN_0051f8f0(9,0x68,0);
    iVar1 = 0;
    goto LAB_0055561a;
  }
  uVar2 = FUN_0053edb0();
  iVar1 = FUN_005fdb00(*param_1,uVar2,param_1 + 1,local_448,iVar1,1);
  if (iVar1 != 0) {
    lVar3 = FUN_00535890();
    if (lVar3 != 0) {
      iVar1 = FUN_00538ab0(lVar3,*param_1,0,local_488,param_1 + 1);
      if (iVar1 == 0) {
LAB_005555aa:
        FUN_0051f420();
        FUN_0051f540("../crypto/pem/pem_lib.c",0x1d3,"PEM_do_header");
        FUN_0051f8f0(9,0x65,0);
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_005360f0(lVar3,param_2,&local_48c,param_2,local_48c);
        if (iVar1 == 0) goto LAB_005555aa;
        *param_3 = (long)local_48c;
        iVar1 = FUN_00536710(lVar3,param_2 + local_48c,&local_48c);
        if (iVar1 == 0) goto LAB_005555aa;
        *param_3 = *param_3 + (long)local_48c;
      }
      FUN_00537b70(lVar3);
      FUN_004227b0(local_448,0x400);
      FUN_004227b0(local_488,0x40);
      goto LAB_0055561a;
    }
  }
  iVar1 = 0;
LAB_0055561a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

