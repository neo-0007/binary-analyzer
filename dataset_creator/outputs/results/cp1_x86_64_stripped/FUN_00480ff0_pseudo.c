
undefined4
FUN_00480ff0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar2 = FUN_004802c0(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_0056b0a0(param_3 & 0xffffffff,param_2,*(undefined8 *)(param_1 + 0xb8),
                           *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x68));
      local_48 = (ulong)iVar2;
      if (local_48 == 0) {
        FUN_0051f420();
        uVar3 = 0x33f;
        goto LAB_004811ef;
      }
      goto LAB_004810eb;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 == 5) {
      iVar2 = FUN_004802c0(param_1);
      if (iVar2 != 0) {
        lVar1 = *(long *)(param_1 + 0xb8);
        iVar2 = FUN_0043b840();
        if (iVar2 != 0) {
          if (lVar1 == 0) {
            iVar2 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
            local_48 = (ulong)iVar2;
          }
          else {
            iVar2 = FUN_00480350(param_1,lVar1,&local_48,0,param_2,param_3);
            if (iVar2 < 1) goto LAB_00481079;
          }
LAB_004810eb:
          if ((param_5 == local_48) &&
             (iVar2 = thunk_FUN_00713570(param_4,*(undefined8 *)(param_1 + 0xb8),param_5),
             iVar2 == 0)) goto LAB_0048110a;
        }
      }
    }
    else if (iVar2 == 6) {
      iVar2 = FUN_0040ac10();
      if (param_5 != (long)iVar2) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x31c,"rsa_verify");
        uVar4 = 0;
        FUN_0051f8f0(0x39,0xa6,"Should be %d, but got %d",(long)iVar2,param_5);
        goto LAB_0048107c;
      }
      iVar2 = FUN_004802c0(param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_0056b0a0(param_3 & 0xffffffff,param_2,*(undefined8 *)(param_1 + 0xb8),
                             *(undefined8 *)(param_1 + 0x10),3);
        if (iVar2 < 1) {
          FUN_0051f420();
          uVar3 = 0x327;
        }
        else {
          iVar2 = FUN_00432720(*(undefined8 *)(param_1 + 0x10),param_4,
                               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70),
                               *(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xb0));
          if (0 < iVar2) goto LAB_0048110a;
          FUN_0051f420();
          uVar3 = 0x32f;
        }
LAB_004811ef:
        uVar4 = 0;
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",uVar3,"rsa_verify");
        FUN_0051f8f0(0x39,0x80004,0);
        goto LAB_0048107c;
      }
    }
    else {
      if (iVar2 == 1) {
        iVar2 = FUN_004342b0(*(undefined4 *)(param_1 + 0x30),param_4,param_5 & 0xffffffff,param_2,
                             param_3 & 0xffffffff,*(undefined8 *)(param_1 + 0x10));
        if (iVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x306,"rsa_verify");
          FUN_0051f8f0(0x39,0x80004,0);
          uVar4 = 0;
          goto LAB_0048107c;
        }
LAB_0048110a:
        uVar4 = 1;
        goto LAB_0048107c;
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x335,"rsa_verify");
      FUN_0051f8f0(0x39,0xa8,"Only X.931, PKCS#1 v1.5 or PSS padding allowed");
    }
  }
LAB_00481079:
  uVar4 = 0;
LAB_0048107c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

