
/* std::locale::facet::_M_remove_reference() const */

void __thiscall std::locale::facet::_M_remove_reference(facet *this)

{
  facet *pfVar1;
  int iVar2;
  
  if (__libc_single_threaded == '\0') {
    LOCK();
    pfVar1 = this + 8;
    iVar2 = *(int *)pfVar1;
    *(int *)pfVar1 = *(int *)pfVar1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 8);
    *(int *)(this + 8) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006309b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))();
  return;
}

