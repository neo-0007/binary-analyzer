
undefined8 __inet6_scopeid_pton(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_1 & 0xc0ff) == 0x80fe) ||
     (((char)*param_1 == -1 && ((byte)((*(byte *)((long)param_1 + 1) & 0xf) - 1) < 2)))) {
    uVar1 = if_nametoindex(param_2);
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0) goto LAB_0076baa1;
  }
  else {
LAB_0076baa1:
    if (((9 < (int)*param_2 - 0x30U) ||
        (uVar2 = ____strtoul_l_internal(param_2,&local_28,10,0,_nl_C_locobj), *local_28 != '\0')) ||
       (uVar2 >> 0x20 != 0)) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      uVar3 = 0xffffffff;
      goto LAB_0076badc;
    }
  }
  *param_3 = (int)uVar2;
  uVar3 = 0;
LAB_0076badc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

