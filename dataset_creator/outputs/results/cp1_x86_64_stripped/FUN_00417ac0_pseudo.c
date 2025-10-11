
undefined4 FUN_00417ac0(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  iVar7 = *(int *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = iVar7;
  if (iVar7 == 0) {
    local_54 = 0x16;
    iVar7 = 1;
  }
  local_58 = 1;
  do {
    local_48 = 0;
    plVar6 = (long *)FUN_00421b70(param_1,iVar7,&local_48);
    uVar3 = local_48;
    local_44 = 0;
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_44 = 1;
LAB_00417b7b:
      if (plVar6 != (long *)0x0) {
        lVar1 = *plVar6;
        plVar2 = plVar6;
        while (lVar1 != 0) {
          (**(code **)(param_2 + 0x18))(param_1,plVar2,uVar3,*(undefined8 *)(param_2 + 0x28));
          lVar1 = plVar2[4];
          plVar2 = plVar2 + 4;
        }
      }
      if (*(code **)(param_2 + 0x20) == (code *)0x0) goto LAB_00417c20;
      iVar5 = (**(code **)(param_2 + 0x20))
                        (param_1,iVar7,uVar3,*(undefined8 *)(param_2 + 0x28),&local_44);
      iVar4 = local_44;
      if (iVar5 == 0) goto LAB_00417c3d;
      FUN_00421ba0(param_1,iVar7,plVar6);
      if (iVar4 < 0) goto LAB_00417c4a;
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar3 = local_58;
      }
    }
    else {
      iVar4 = (**(code **)(param_2 + 0x10))
                        (param_1,iVar7,local_48,*(undefined8 *)(param_2 + 0x28),&local_44);
      if (iVar4 == 0) {
LAB_00417c3d:
        FUN_00421ba0(param_1,iVar7,plVar6);
LAB_00417c4a:
        local_58 = 0;
        break;
      }
      if (local_44 != 0) goto LAB_00417b7b;
LAB_00417c20:
      FUN_00421ba0(param_1,iVar7,plVar6);
      uVar3 = local_58;
    }
    local_58 = uVar3;
    iVar7 = iVar7 + 1;
  } while (iVar7 <= local_54);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

