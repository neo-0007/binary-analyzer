
int FUN_004690e0(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  int local_ac;
  uint local_8c;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = FUN_0043b840();
  if ((iVar6 != 0) &&
     ((uVar8 = FUN_00485290(*param_1), param_4 == 0 ||
      ((iVar6 = FUN_0043c6f0(param_1 + 6,param_4,uVar8), iVar6 != 0 &&
       (iVar6 = FUN_00468e10(param_1,param_4), iVar6 != 0)))))) {
    if (param_1[1] == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x9a,"kdf_pbkdf2_derive");
      FUN_0051f8f0(0x39,0x82,0);
      iVar6 = 0;
      goto LAB_0046911f;
    }
    if (param_1[3] == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x9f,"kdf_pbkdf2_derive");
      FUN_0051f8f0(0x39,0x83,0);
      iVar6 = 0;
      goto LAB_0046911f;
    }
    uVar9 = FUN_0043c7e0(param_1 + 6);
    uVar8 = param_1[4];
    uVar13 = param_1[2];
    iVar6 = *(int *)(param_1 + 9);
    uVar2 = param_1[5];
    uVar3 = param_1[3];
    uVar4 = param_1[1];
    iVar7 = FUN_0040ac10(uVar9);
    if (0 < iVar7) {
      if (0xfffffffe < param_3 / (ulong)(long)iVar7) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x127,"pbkdf2_derive");
        FUN_0051f8f0(0x39,0x69,0);
        iVar6 = 0;
        goto LAB_0046911f;
      }
      if (iVar6 != 0) {
        if (param_3 * 8 < 0x70) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x12d,"pbkdf2_derive");
          FUN_0051f8f0(0x39,0xab,0);
          iVar6 = 0;
          goto LAB_0046911f;
        }
        if ((int)uVar8 < 0x10) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x131,"pbkdf2_derive");
          FUN_0051f8f0(0x39,0x70,0);
          goto LAB_0046911d;
        }
        if (uVar2 < 1000) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x135,"pbkdf2_derive");
          FUN_0051f8f0(0x39,0x7b,0);
          iVar6 = 0;
          goto LAB_0046911f;
        }
      }
      lVar10 = FUN_00545280();
      if (lVar10 != 0) {
        iVar6 = FUN_00544dc0(lVar10,uVar4,uVar13 & 0xffffffff,uVar9,0);
        if ((iVar6 == 0) || (lVar11 = FUN_00545280(), lVar11 == 0)) {
          lVar11 = 0;
          iVar6 = 0;
        }
        else {
          local_ac = (int)param_3;
          if (local_ac != 0) {
            uVar5 = 1;
            do {
              iVar1 = iVar7;
              if (local_ac <= iVar7) {
                iVar1 = local_ac;
              }
              lVar14 = (long)iVar1;
              local_8c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18;
              iVar6 = FUN_005452d0(lVar11,lVar10);
              if (((iVar6 == 0) || (iVar6 = FUN_00545040(lVar11,uVar3,(long)(int)uVar8), iVar6 == 0)
                  ) || (iVar6 = FUN_00545040(lVar11,&local_8c,4), iVar6 == 0)) goto LAB_0046926d;
              iVar6 = FUN_00545060(lVar11,local_88,0);
              if (iVar6 == 0) goto LAB_0046926d;
              thunk_FUN_00713a50(param_2,local_88,lVar14);
              if (1 < uVar2) {
                uVar13 = 1;
                do {
                  iVar6 = FUN_005452d0(lVar11,lVar10);
                  if (((iVar6 == 0) ||
                      (iVar6 = FUN_00545040(lVar11,local_88,(long)iVar7), iVar6 == 0)) ||
                     (iVar6 = FUN_00545060(lVar11,local_88,0), iVar6 == 0)) goto LAB_0046926d;
                  if (0 < iVar1) {
                    lVar12 = 0;
                    do {
                      *(byte *)(param_2 + lVar12) = *(byte *)(param_2 + lVar12) ^ local_88[lVar12];
                      lVar12 = lVar12 + 1;
                    } while (lVar12 != lVar14);
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar2 != uVar13);
              }
              uVar5 = uVar5 + 1;
              param_2 = param_2 + lVar14;
              local_ac = local_ac - iVar1;
            } while (local_ac != 0);
          }
          iVar6 = 1;
        }
LAB_0046926d:
        FUN_00545130(lVar11);
        FUN_00545130(lVar10);
        goto LAB_0046911f;
      }
    }
  }
LAB_0046911d:
  iVar6 = 0;
LAB_0046911f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar6;
}

