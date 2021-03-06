<?php

namespace Rector\DeadCode\Tests\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class Items
{
    public function lists()
    {
        $items = [
            1 => 'A',
            1 => 'B',
            1 => 'A'
        ];

        $key = 1;
        $items = [
            $key => 'A',
            $key => 'A',
        ];
    }
}

?>
-----
<?php

namespace Rector\DeadCode\Tests\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class Items
{
    public function lists()
    {
        $items = [
            1 => 'A',
            1 => 'B'
        ];

        $key = 1;
        $items = [
            $key => 'A',
        ];
    }
}

?>
