
undefined4 FUN_00615ec0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar2 = FUN_006e9510(param_1,&local_38,10);
    if (((local_38 == (char *)0x0) || (*local_38 == '\0')) ||
       (local_38 == (char *)(param_1 + param_2))) {
      if ((long)uVar2 < 0) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2f0,"bitstr_cb");
        FUN_0051f8f0(0xd,0xbb,0);
      }
      else {
        iVar1 = FUN_005b3fd0(param_3,uVar2 & 0xffffffff,1);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2f4,"bitstr_cb");
          FUN_0051f8f0(0xd,0xc0100,0);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

