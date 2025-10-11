
int FUN_005fdb00(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  int local_d4;
  int local_c0;
  int local_bc;
  undefined1 *local_b0;
  undefined1 *local_a8;
  uint local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_b0 = param_7;
  local_a8 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_d4 = FUN_0040a170();
  local_c0 = FUN_00409910(param_1);
  if (0x40 < local_d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","../crypto/evp/evp_key.c",0x5a);
  }
  if (0x10 < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: niv <= EVP_MAX_IV_LENGTH","../crypto/evp/evp_key.c",0x5b);
  }
  if (param_4 != 0) {
    lVar3 = FUN_00405f40();
    local_bc = 0;
    if (lVar3 != 0) {
      while ((iVar1 = FUN_00407430(lVar3,param_2,0), iVar1 != 0 &&
             ((((local_bc == 0 || (iVar1 = FUN_00405f60(lVar3,local_88,local_8c), iVar1 != 0)) &&
               (iVar1 = FUN_00405f60(lVar3,param_4,(long)param_5), iVar1 != 0)) &&
              ((param_3 == 0 || (iVar1 = FUN_00405f60(lVar3,param_3,8), iVar1 != 0))))))) {
        iVar1 = FUN_00406090(lVar3,local_88,&local_8c);
        if (iVar1 == 0) break;
        uVar2 = 1;
        if (1 < param_6) {
          do {
            iVar1 = FUN_00407430(lVar3,param_2,0);
            if (((iVar1 == 0) || (iVar1 = FUN_00405f60(lVar3,local_88,local_8c), iVar1 == 0)) ||
               (iVar1 = FUN_00406090(lVar3,local_88,&local_8c), iVar1 == 0)) goto LAB_005fdc92;
            uVar2 = uVar2 + 1;
          } while (uVar2 != param_6);
        }
        uVar2 = 0;
        if (local_d4 != 0) {
          uVar2 = 0;
          puVar5 = local_88;
          do {
            iVar1 = local_d4 - uVar2;
            if (local_8c == uVar2) {
              local_d4 = iVar1;
              if ((local_c0 != 0) || (iVar1 != 0)) goto LAB_005fdd26;
              goto LAB_005fddb0;
            }
            puVar4 = local_b0;
            if (local_b0 != (undefined1 *)0x0) {
              puVar4 = local_b0 + 1;
              *local_b0 = *puVar5;
            }
            puVar5 = puVar5 + 1;
            uVar2 = uVar2 + 1;
            local_b0 = puVar4;
          } while (puVar5 != local_88 + (ulong)(local_d4 - 1) + 1);
        }
        while( true ) {
          if (local_c0 == 0) goto LAB_005fddb0;
          if (local_8c == uVar2) break;
          puVar5 = local_a8;
          if (local_a8 != (undefined1 *)0x0) {
            puVar5 = local_a8 + 1;
            *local_a8 = local_88[uVar2];
          }
          uVar2 = uVar2 + 1;
          local_c0 = local_c0 + -1;
          local_a8 = puVar5;
        }
        local_d4 = 0;
LAB_005fdd26:
        local_bc = local_bc + 1;
      }
    }
LAB_005fdc92:
    local_d4 = 0;
LAB_005fdc9a:
    FUN_00406b90(lVar3);
    FUN_004227b0(local_88,0x40);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_d4;
LAB_005fddb0:
  local_d4 = FUN_0040a170(param_1);
  goto LAB_005fdc9a;
}

