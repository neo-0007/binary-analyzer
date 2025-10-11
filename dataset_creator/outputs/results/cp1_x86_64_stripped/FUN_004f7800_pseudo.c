
undefined8 FUN_004f7800(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long *in_stack_00000010;
  
  if (*(code **)(*in_stack_00000010 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f7832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000010 + 0x50))(param_1,param_2,param_3);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_sign.c",0x2f,"ECDSA_sign_ex");
  FUN_0051f8f0(0x10,0x98,0);
  return 0;
}

