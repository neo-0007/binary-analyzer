
/* std::locale::facet::~facet() */

void __thiscall std::locale::facet::~facet(facet *this)

{
                    /* try { // try from 00623b6e to 00623b72 has its CatchHandler @ 00623b82 */
  ~facet(this);
  operator_delete(this);
  return;
}

