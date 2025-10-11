
int FUN_0047e480(long param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) goto LAB_0047e550;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_0051f420();
    iVar1 = 0;
    FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",99,
                 "eddsa_digest_signverify_init");
    FUN_0051f8f0(0x39,0x7a,0);
    goto LAB_0047e550;
  }
  if (param_3 == 0) {
    iVar1 = 1;
    if (*(long *)(param_1 + 8) == 0) {
      FUN_0051f420();
      iVar1 = 0;
      FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",0x6b,
                   "eddsa_digest_signverify_init");
      FUN_0051f8f0(0x39,0x72,0);
    }
    goto LAB_0047e550;
  }
  iVar1 = FUN_00511630(param_3);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",0x70,
                 "eddsa_digest_signverify_init");
    FUN_0051f8f0(0x39,0xc0103,0);
    iVar1 = 0;
    goto LAB_0047e550;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  iVar1 = FUN_00546fe0(auStack_68,param_1 + 0x10,0x100);
  if (*(int *)(param_3 + 0x60) == 2) {
    if (iVar1 != 0) {
      iVar1 = FUN_00484d50(auStack_68,0xffffffff,param_3);
joined_r0x0047e666:
      if ((iVar1 != 0) && (iVar1 = FUN_00547ad0(auStack_68), iVar1 != 0)) {
        FUN_005472b0(auStack_68,param_1 + 0x118);
        uVar2 = FUN_00547310(auStack_68);
        *(undefined8 *)(param_1 + 0x110) = uVar2;
      }
    }
  }
  else {
    if (*(int *)(param_3 + 0x60) != 3) {
      FUN_0051f420();
      iVar1 = 0;
      FUN_0051f540("../providers/implementations/signature/eddsa_sig.c",0x86,
                   "eddsa_digest_signverify_init");
      FUN_0051f8f0(0x39,0xc0103,0);
      FUN_00511590(param_3);
      goto LAB_0047e550;
    }
    if (iVar1 != 0) {
      iVar1 = FUN_00484db0(auStack_68,0xffffffff,param_3);
      goto joined_r0x0047e666;
    }
  }
  iVar1 = 1;
  FUN_00547da0(auStack_68);
  *(long *)(param_1 + 8) = param_3;
LAB_0047e550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

