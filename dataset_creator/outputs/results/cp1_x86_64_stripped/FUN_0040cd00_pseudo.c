
ulong FUN_0040cd00(long param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  uint local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  piVar1 = *(int **)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (piVar1 == (int *)0x0) {
LAB_0040cf58:
    FUN_0051f420();
    uVar5 = 0;
    FUN_0051f540("../crypto/evp/m_sigver.c",0x1f0,"EVP_DigestSignFinal");
    FUN_0051f8f0(6,0x86,0);
  }
  else {
    if (((*piVar1 == 0x80) && (*(long *)(piVar1 + 0xc) != 0)) &&
       (lVar6 = *(long *)(piVar1 + 10), lVar6 != 0)) {
      if (param_2 == 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar6 + 0x78);
        uVar8 = 0;
      }
      else {
        if ((*(byte *)(param_1 + 0x19) & 2) == 0) {
          lVar6 = FUN_00413680(piVar1);
          if (lVar6 == 0) goto LAB_0040cee0;
          uVar3 = (**(code **)(*(long *)(lVar6 + 0x28) + 0x78))
                            (*(undefined8 *)(lVar6 + 0x30),param_2,param_3,*param_3);
          uVar5 = (ulong)uVar3;
          FUN_00412f00(lVar6);
          goto LAB_0040ce70;
        }
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar6 + 0x78);
        uVar8 = *param_3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0040cd97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE_00)(*(long *)(piVar1 + 0xc),param_2,param_3,uVar8);
        return uVar5;
      }
      goto LAB_0040d0d7;
    }
    lVar6 = *(long *)(piVar1 + 0x1e);
    if (lVar6 == 0) goto LAB_0040cf58;
    if ((*(byte *)(piVar1 + 0x28) & 1) != 0) {
      iVar4 = (**(code **)(lVar6 + 0xf8))(piVar1,param_1);
      if (iVar4 == 0) goto LAB_0040cee0;
      lVar6 = *(long *)(piVar1 + 0x1e);
    }
    *(byte *)(piVar1 + 0x28) = *(byte *)(piVar1 + 0x28) & 0xfe;
    uVar3 = *(uint *)(lVar6 + 4) & 4;
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar6 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        if (param_2 == 0) {
          iVar4 = FUN_0040ac10(*(undefined8 *)(param_1 + 8));
          if (iVar4 < 0) goto LAB_0040cee0;
          uVar5 = (ulong)iVar4;
          puVar7 = (undefined1 *)0x0;
          param_2 = 0;
        }
        else {
          local_8c = 0;
          bVar2 = false;
          if ((*(byte *)(param_1 + 0x19) & 2) == 0) goto LAB_0040cfd0;
          bVar2 = false;
          uVar3 = FUN_00406090(param_1,local_88,&local_8c);
LAB_0040cf1e:
          uVar5 = (ulong)uVar3;
          if ((uVar3 == 0) || (bVar2)) goto LAB_0040ce70;
          uVar5 = (ulong)local_8c;
          puVar7 = local_88;
        }
        iVar4 = FUN_00416b10(piVar1,param_2,param_3,puVar7,uVar5);
        uVar5 = (ulong)(0 < iVar4);
      }
      else if (param_2 == 0) {
        iVar4 = (*UNRECOVERED_JUMPTABLE_00)(piVar1,0,param_3,param_1);
        uVar5 = (ulong)(0 < iVar4);
      }
      else {
        local_8c = 0;
        bVar2 = true;
        if ((*(byte *)(param_1 + 0x19) & 2) == 0) {
LAB_0040cfd0:
          local_8c = 0;
          lVar6 = FUN_00405f40();
          if (lVar6 != 0) {
            iVar4 = FUN_004074f0(lVar6,param_1);
            if (iVar4 != 0) {
              if (bVar2) {
                uVar3 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x78) + 0x78))
                                  (*(long *)(lVar6 + 0x28),param_2,param_3,lVar6);
              }
              else {
                uVar3 = FUN_00406090(lVar6,local_88,&local_8c);
              }
              FUN_00406b90(lVar6);
              goto LAB_0040cf1e;
            }
            FUN_00406b90(lVar6);
            goto LAB_0040cee0;
          }
        }
        else {
          uVar3 = (*UNRECOVERED_JUMPTABLE_00)(piVar1,param_2,param_3,param_1);
          uVar5 = (ulong)uVar3;
        }
      }
    }
    else {
      if (param_2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar6 + 0x78);
          param_2 = 0;
LAB_0040cdfd:
                    /* WARNING: Could not recover jumptable at 0x0040ce0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE_00)(piVar1,param_2,param_3,param_1);
          return uVar5;
        }
        goto LAB_0040d0d7;
      }
      if ((*(byte *)(param_1 + 0x19) & 2) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar6 + 0x78);
          goto LAB_0040cdfd;
        }
        goto LAB_0040d0d7;
      }
      lVar6 = FUN_00413680(piVar1);
      if (lVar6 != 0) {
        uVar3 = (**(code **)(*(long *)(lVar6 + 0x78) + 0x78))(lVar6,param_2,param_3,param_1);
        uVar5 = (ulong)uVar3;
        FUN_00412f00(lVar6);
        goto LAB_0040ce70;
      }
LAB_0040cee0:
      uVar5 = 0;
    }
  }
LAB_0040ce70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_0040d0d7:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

