
void FUN_00417dc0(undefined8 param_1,undefined8 *param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x18))
                    (param_2,param_1,*(undefined8 *)(param_4 + 0x20));
  if (lVar1 == 0) {
    return;
  }
  if ((param_3 == 0) || (*(int *)(param_4 + 0x14) != 0)) {
    (*(code *)(*(undefined8 **)(param_4 + 0x18))[2])(0,lVar1,param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = (*(code *)**(undefined8 **)(param_4 + 0x18))(*(undefined8 *)(param_4 + 0x20));
    *(long *)(param_4 + 8) = lVar2;
    if (lVar2 == 0) {
      return;
    }
    (**(code **)(*(long *)(param_4 + 0x18) + 0x10))
              (lVar2,lVar1,param_1,*param_2,param_2[1],*(undefined8 *)(param_4 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00417e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x18) + 0x20))(lVar1,*(undefined8 *)(param_4 + 0x20));
  return;
}

