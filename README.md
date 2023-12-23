# 可信软件开发
这是可信软件开发 1-2 次课的课后作业最终版本。
在第一次课中，我们尝试了测试驱动开发，通过先编写测试用例，然后基于测试用例进行开发，体验了这一开发方法。
第二次课的主要任务是使用 unordered_map 代替 switch-case，并使几个 DiscountType 类继承自 Discount 基类。

最终的目标是通过使用 lambda 表达式将继承关系解耦，并使用单例模式确保 discountMap 仅在初始化时生成一次。

## 项目结构

该项目分为以下组件：

- `Discount.h`: 定义了 `Discount` 基类和使用 lambda 表达式定义的各种折扣类型。
- `Discount.cpp`: 实现了折扣类型的具体函数。
- `DiscountManager.h` 和 `DiscountManager.cpp`: 管理折扣策略的创建和检索，使用懒汉式单例模式。
- `PriceCalculator.h` 和 `PriceCalculator.cpp`: 实现了 `PriceCalculator` 类，用于根据折扣类型计算价格。
