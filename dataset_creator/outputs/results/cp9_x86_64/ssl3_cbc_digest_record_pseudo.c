
undefined8 ssl3_cbc_digest_record(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong in_stack_00000008;
  
  if (0xfffff < in_stack_00000008) {
    return 0;
  }
  uVar1 = ssl3_cbc_digest_record_part_0(param_1,param_2,param_3);
  return uVar1;
}

