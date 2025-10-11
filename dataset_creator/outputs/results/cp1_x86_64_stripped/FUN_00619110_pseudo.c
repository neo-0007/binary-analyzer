
bool FUN_00619110(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  int local_64;
  int local_40;
  
  if (*param_3 == 0) {
    FUN_004b7b50();
    return true;
  }
  FUN_004b2c00(param_4);
  uVar2 = FUN_004b2df0(param_4);
  uVar3 = FUN_004b2df0(param_4);
  lVar4 = FUN_004b2df0(param_4);
  if ((lVar4 != 0) && (iVar1 = FUN_00618590(uVar2,param_2,param_3), iVar1 != 0)) {
    iVar1 = FUN_004b7ba0(uVar2);
    if (iVar1 != 0) {
      bVar10 = true;
      FUN_004b7b50(param_1);
      goto LAB_00619223;
    }
    uVar9 = *param_3 & 1;
    if (uVar9 == 0) {
      uVar6 = FUN_004b2df0(param_4);
      uVar7 = FUN_004b2df0(param_4);
      lVar5 = FUN_004b2df0(param_4);
      if (lVar5 != 0) {
        local_40 = 0;
        do {
          iVar1 = FUN_004bb500(uVar6,*param_3,0,0,0,param_4);
          if ((iVar1 == 0) || (iVar1 = FUN_00618590(uVar6,uVar6,param_3), iVar1 == 0))
          goto LAB_00619220;
          FUN_004b7b50(uVar3);
          lVar8 = FUN_004b8260(lVar4,uVar6);
          if (lVar8 == 0) goto LAB_00619220;
          if (1 < (int)*param_3) {
            local_64 = 1;
            do {
              iVar1 = FUN_00618820(uVar3,uVar3,param_3,param_4);
              if ((((iVar1 == 0) || (iVar1 = FUN_00618820(uVar7,lVar4,param_3,param_4), iVar1 == 0))
                  || (iVar1 = FUN_00618cb0(lVar5,uVar7,uVar2), iVar1 == 0)) ||
                 ((iVar1 = FUN_006184d0(uVar3,uVar3,lVar5), iVar1 == 0 ||
                  (iVar1 = FUN_006184d0(lVar4,uVar7,uVar6), iVar1 == 0)))) goto LAB_00619220;
              local_64 = local_64 + 1;
            } while (local_64 < (int)*param_3);
          }
          local_40 = local_40 + 1;
          iVar1 = FUN_004b7ba0(lVar4);
        } while ((iVar1 != 0) && (local_40 != 0x32));
        iVar1 = FUN_004b7ba0(lVar4);
        if (iVar1 == 0) goto LAB_006193b8;
        FUN_0051f420();
        FUN_0051f540("../crypto/bn/bn_gf2m.c",0x435,"BN_GF2m_mod_solve_quad_arr");
        FUN_0051f8f0(3,0x71,0);
      }
    }
    else {
      lVar5 = FUN_004b8260(uVar3,uVar2);
      if (lVar5 != 0) {
        if (2 < (int)*param_3) {
          do {
            iVar1 = FUN_00618820(uVar3,uVar3,param_3,param_4);
            if (((iVar1 == 0) || (iVar1 = FUN_00618820(uVar3,uVar3,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_006184d0(uVar3,uVar3,uVar2), iVar1 == 0)) goto LAB_00619220;
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 <= (int)(*param_3 - 1) / 2);
        }
LAB_006193b8:
        iVar1 = FUN_00618820(lVar4,uVar3,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = FUN_006184d0(lVar4,uVar3,lVar4), iVar1 != 0)) {
          iVar1 = FUN_004b77f0(lVar4,uVar2);
          if (iVar1 == 0) {
            lVar4 = FUN_004b8260(param_1,uVar3);
            bVar10 = lVar4 != 0;
          }
          else {
            FUN_0051f420();
            FUN_0051f540("../crypto/bn/bn_gf2m.c",0x43f,"BN_GF2m_mod_solve_quad_arr");
            FUN_0051f8f0(3,0x74,0);
            bVar10 = false;
          }
          goto LAB_00619223;
        }
      }
    }
  }
LAB_00619220:
  bVar10 = false;
LAB_00619223:
  FUN_004b2d50(param_4);
  return bVar10;
}

