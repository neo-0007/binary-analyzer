
ulong FUN_004ab870(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x196,"BIO_puts");
    FUN_0051f8f0(0x20,0xc0102,0);
    uVar2 = 0xffffffff;
    goto LAB_004ab94c;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x30) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x19a,"BIO_puts");
    FUN_0051f8f0(0x20,0x79,0);
    uVar2 = 0xfffffffe;
    goto LAB_004ab94c;
  }
  if ((*(long *)(param_1 + 0x10) != 0) || (lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
    uVar2 = FUN_004aaf30(param_1,4,param_2,0,0,0);
    lVar3 = 1;
    if ((int)uVar2 < 1) goto LAB_004ab94c;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_0051f420(lVar3);
    FUN_0051f540("../crypto/bio/bio_lib.c",0x1a5,"BIO_puts");
    FUN_0051f8f0(0x20,0x78,0);
    uVar2 = 0xffffffff;
    goto LAB_004ab94c;
  }
  uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x30))(param_1,param_2);
  if ((int)uVar2 < 1) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      goto joined_r0x004ab9a5;
    }
  }
  else {
    local_28 = (ulong)(int)uVar2;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + local_28;
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
joined_r0x004ab9a5:
      if (lVar3 == 0) goto LAB_004ab94c;
    }
  }
  uVar2 = FUN_004aaf30(param_1,0x84,param_2,0,0,0);
  if ((0 < (int)uVar2) && (uVar2 = local_28, 0x7fffffff < local_28)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x1b7,"BIO_puts");
    FUN_0051f8f0(0x20,0x66,0);
    uVar2 = 0xffffffff;
  }
LAB_004ab94c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

