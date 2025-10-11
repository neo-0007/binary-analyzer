
undefined8 FUN_006c31d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_00945578;
  LOCK();
  DAT_00945578 = param_1;
  UNLOCK();
  return uVar1;
}

