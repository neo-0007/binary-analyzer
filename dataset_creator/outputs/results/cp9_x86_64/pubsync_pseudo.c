
/* std::wstreambuf::pubsync() */

undefined8 __thiscall std::wstreambuf::pubsync(wstreambuf *this)

{
  undefined8 uVar1;
  
  if (*(code **)(*(long *)this + 0x30) == sync) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00690710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x30))();
  return uVar1;
}

