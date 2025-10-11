
undefined8 FUN_0042b2a0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004a8930(&local_68,&local_74,local_60,param_2);
  iVar1 = FUN_00423da0(local_68);
  if ((iVar1 == 0x390) && (local_74 != -1)) {
    if (local_74 != 0x10) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_backend.c",0x220,"ossl_rsa_param_decode");
      FUN_0051f8f0(4,0x95,0);
      uVar6 = 0;
      goto LAB_0042b42d;
    }
    lVar4 = FUN_0042b160(param_2);
    if (lVar4 != 0) {
      iVar1 = FUN_0042c590(param_1,lVar4);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          lVar4 = FUN_0042c580(param_1);
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)FUN_0042c5c0(param_1);
            if (puVar5 != (undefined8 *)0x0) {
              local_58 = 0;
              local_50 = 0;
              iVar1 = FUN_0042b1b0(lVar4,&local_58,&local_50,&local_70,&local_6c);
              if (iVar1 != 0) {
                uVar2 = FUN_0040aaf0(local_58);
                uVar3 = FUN_0040aaf0(local_50);
                iVar1 = FUN_004331f0(&local_48);
                if (iVar1 != 0) {
                  iVar1 = FUN_004332a0(&local_48,uVar2);
                  if (iVar1 != 0) {
                    iVar1 = FUN_004332e0(&local_48,uVar3);
                    if (iVar1 != 0) {
                      iVar1 = FUN_00433300(&local_48,local_70);
                      if (iVar1 != 0) {
                        iVar1 = FUN_00433320(&local_48,local_6c);
                        if (iVar1 != 0) {
                          *puVar5 = local_48;
                          puVar5[1] = uStack_40;
                          *(undefined4 *)(puVar5 + 2) = local_38;
                          goto LAB_0042b428;
                        }
                      }
                    }
                  }
                }
              }
              uVar6 = 0;
              goto LAB_0042b42d;
            }
          }
        }
        goto LAB_0042b428;
      }
    }
    FUN_0056a4a0(lVar4);
    uVar6 = 0;
  }
  else {
LAB_0042b428:
    uVar6 = 1;
  }
LAB_0042b42d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

