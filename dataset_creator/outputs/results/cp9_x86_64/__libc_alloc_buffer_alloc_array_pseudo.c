
ulong __libc_alloc_buffer_alloc_array(ulong *param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = (*param_1 - 1) + param_3 & -param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar4 = uVar3 + uVar5;
  if (((SUB168(auVar1 * auVar2,8) == 0 && !CARRY8(uVar3,uVar5)) && (*param_1 <= uVar5)) &&
     (uVar4 <= param_1[1])) {
    *param_1 = uVar4;
    return uVar5;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}

