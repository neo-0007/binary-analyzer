
/* WARNING: Removing unreachable block (ram,0x00496da9) */

ulong FUN_00496d97(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulong)param_2 >> 0x20);
  return CONCAT44((uint)((ulong)param_1 >> 0x20) ^ param_5 ^ (uint)param_1,(uint)param_1) ^
         CONCAT44(uVar1,uVar1);
}

